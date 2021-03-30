--THI THỰC HÀNH – ĐỀ 14
--Môn: CƠ SỞ DỮ LIỆU
CREATE DATABASE DeThiThucHanhSo14
USE DeThiThucHanhSo14
SET DATEFORMAT DMY

CREATE TABLE TUYENXEBUS 
(
MaTuyen char(5) PRIMARY KEY, --Mã tuyến
NoiXP char(15), --Nơi xuất phát
NoiDEN char(15), --Nơi đến
DoDaiTuyen Numeric(3,1) --Độ dài tuyến (Km)
)
CREATE TABLE XEBUS 
(
MaXe char(5) PRIMARY KEY, --Mã xe
MaLoai char(5), --Mã loại
MaTuyen char(5) FOREIGN KEY REFERENCES TUYENXEBUS(MATUYEN), --Mã tuyến xe
MaTaiXe char(5), --Mã tài xế
)
CREATE TABLE TAIXE
(
MaTaiXe char(5) PRIMARY KEY, --Mã tài xế
TenTaiXe char(25), --Tên tài xế
Luong Int --Lương tài xế
)
CREATE TABLE LOAIXE 
(
MaLoai char(5) PRIMARY KEY, --Mã loại xe
DacDiem char(50), --Đặc điểm loại xe
)
CREATE TABLE BANGLAI 
(
MaTaiXe char(5)FOREIGN KEY REFERENCES TAIXE(MaTaiXe), --Mã tài xế
MaLoai char(5)FOREIGN KEY REFERENCES LOAIXE(MALOAI),  --Mã loại xe
CONSTRAINT PK_BANGLAI PRIMARY KEY (MaTaiXe, MaLoai)
)


--2. Hiện thực các ràng buộc toàn vẹn sau:
--2.1. Độ dài mọi tuyến xe phải lớn hơn 0. (1 đ)
ALTER TABLE TUYENXEBUS ADD CONSTRAINT CK_DODAITUYEN CHECK (DODAITUYEN > 0)
--2.2. Tài xế chỉ được lái loại xe mà mình có bằng lái. (1.5 đ)
--3. Viết các câu lệnh SQL thực hiện các câu truy vấn sau:
--3.1. Tìm mã các tài xế chạy tuyến dài hơn 49,9 Km. (1.5 đ)
SELECT T.MaTaiXe
FROM TAIXE T JOIN XEBUS X ON T.MaTaiXe = X.MaTaiXe JOIN TUYENXEBUS B ON X.MaTuyen = B.MaTuyen
WHERE DoDaiTuyen > 49.9
--3.2. Tìm mã, tên (các) tài xế có mức lương cao nhất. (1.5 đ)
SELECT MaTaiXe, TenTaiXe
FROM TAIXE
WHERE Luong >= ALL (
SELECT LUONG
FROM TAIXE)
--3.3. Tìm những loại xe (MaLoai, DacDiem) có chạy trên tất cả các tuyến. (1.5 đ)
SELECT L.MaLoai, DacDiem
FROM LOAIXE L, XEBUS S
WHERE L.MaLoai = S.MaLoai AND NOT EXISTS (
				-- Các tuyến xe chưa chạy
				SELECT MaTuyen
				FROM TUYENXEBUS
				WHERE MaTuyen NOT IN (
								-- Tất cả các tuyến mà xe đã chạy
								SELECT T.MaTuyen
								FROM TUYENXEBUS T, XEBUS X
								WHERE T.MaTuyen = X.MaTuyen AND X.MaTaiXe = S.MaTaiXe
								))