SET DATEFORMAT DMY
CREATE DATABASE QuanLyQuanKaraoke
USE QuanLyQuanKaraoke

CREATE TABLE KHACH_HANG(
    MAKH INT PRIMARY KEY, 
    TENKH VARCHAR(30),
    DIACHI VARCHAR(50),
    SODT CHAR(11)
) 
CREATE TABLE PHONG(
    MAPHONG INT PRIMARY KEY,
    LOAIPHONG VARCHAR(20),
    SOKHACHTOIDA INT,
    GIAPHONG DECIMAL(6,3),
    MOTA VARCHAR(255)
)
CREATE TABLE DAT_PHONG(
    MADATPHONG INT PRIMARY KEY,
    MAPHONG INT,
    MAKH INT,
    NGAYDAT DATE,
    GIOBATDAU TIME,
    GIOKETTHUC TIME,
    TIENDATCOC DECIMAL(6,3),
    GHICHU VARCHAR(255),
    TRANGTHAIDAT VARCHAR(30),
    FOREIGN KEY (MAPHONG) REFERENCES PHONG(MAPHONG),
    FOREIGN KEY (MAKH) REFERENCES khach_hang(MAKH)
)
CREATE TABLE DICH_VU_DI_KEM(
    MADV INT PRIMARY KEY,
    TENDV VARCHAR(255),
    DONVITINH VARCHAR(30),
    DONGIA DECIMAL(6,3)
)
CREATE TABLE CHI_TIET_SU_DUNG_DV(
    MADATPHONG INT,
    MADV INT,
    SOLUONG INT,
    PRIMARY KEY (MADATPHONG, MADV),
    FOREIGN KEY (MADATPHONG) REFERENCES dat_phong(MADATPHONG)
)

-- INSERT DATA 
 
INSERT INTO PHONG (MAPHONG, LOAIPHONG, SOKHACHTOIDA, GIAPHONG, MOTA) VALUES
(1, 'LOAI 1', 20, '60.000', ''),
(2, 'LOAI 1', 25, '80.000', ''),
(3, 'LOAI 2', 15, '50.000', ''),
(4, 'LOAI 3', 20, '50.000', '');
 
INSERT INTO KHACH_HANG (MAKH, TENKH, DIACHI, SODT) VALUES
(1, 'HUU TIN', 'HOA XUAN', '11111111111'),
(2, 'QUOC LIEM', 'HOA XUAN', '11111111112'),
(3, 'MINH TIEP', 'HOA XUAN', '11111111113'),
(4, 'DUC TAI', 'HOA XUAN', '11111111114');
 
INSERT INTO DICH_VU_DI_KEM (MADV, TENDV, DONVITINH, DONGIA) VALUES
(1, 'NUOC NGOT', 'CHAI', '20.000'),
(2, 'SNACK', 'BICH', '20.000'),
(3, 'BEER', 'LON', '20.000'),
(4, 'TRAI CAY', 'DIA', '55.000');
 
 
INSERT INTO DAT_PHONG (MADATPHONG, MAPHONG, MAKH, NGAYDAT, GIOBATDAU, GIOKETTHUC, TIENDATCOC, GHICHU, TRANGTHAIDAT) VALUES
(1, 1, 2, '2018-03-26', '11:00:00', '13:00:00', '100.000', '', 'DA DAT'),
(2, 1, 3, '2018-03-27', '17:15:00', '19:15:00', '50.000', '', 'DA HUY'),
(3, 2, 2, '2018-03-26', '20:30:00', '22:15:00', '100.000', '', 'DA DAT'),
(4, 3, 1, '2018-04-01', '19:30:00', '21:15:00', '200.000', '', 'DA DAT');
 
INSERT INTO CHI_TIET_SU_DUNG_DV (MADATPHONG, MADV, SOLUONG) VALUES
(1, 1, 20),
(1, 2, 10),
(1, 3, 3),
(2, 2, 10),
(2, 3, 1),
(3, 3, 2),
(3, 4, 10);

--I
--Câu 1:Liệt kê MaDatPhong, MaDV, SoLuong của tất cả các dịch vụ có số lượng lớn hơn 3 và nhỏ hơn 10. (1 điểm)
SELECT MADATPHONG, MADV, SOLUONG
FROM CHI_TIET_SU_DUNG_DV
WHERE SOLUONG > 3 AND SOLUONG < 10
-- BETWEN 4 AND 9

--Câu 2: Cập nhật dữ liệu trên trường GiaPhong thuộc bảng PHONG tăng lên 10,000 VNĐ so với giá phòng hiện tại, 
--chỉ cập nhật giá phòng của những phòng có số khách tối đa lớn hơn 10. (1 điểm)
SELECT *
INTO PHONG1
FROM PHONG

UPDATE PHONG1
SET GIAPHONG = GIAPHONG + 10.000
WHERE SOKHACHTOIDA > 10

--Câu 3: Xóa tất cả những đơn đặt phòng (từ bảng DAT_PHONG) có trạng thái đặt (TrangThaiDat) là “Da huy”. (1 điểm)
SELECT * 
INTO DAT_PHONG1
FROM DAT_PHONG

ALTER TABLE CHI_TIET_SU_DUNG_DV DROP CONSTRAINT FK__CHI_TIET___MADAT__403A8C7D

DELETE FROM DAT_PHONG 
WHERE TRANGTHAIDAT = 'DA HUY'

ALTER TABLE CHI_TIET_SU_DUNG_DV 
ADD CONSTRAINT PK_CHITIET_PHONG 
FOREIGN KEY (MADATPHONG) REFERENCES DAT_PHONG(MADATPHONG)

ALTER TABLE HOADON 
ADD CONSTRAINT fk01_HD 
FOREIGN KEY(MAKH) REFERENCES KHACHHANG(MAKH) 

--II.
--Câu 4: Hiển thị TenKH của những khách hàng có tên bắt đầu là một trong các ký tự “H”, “N”, “M” và có độ dài tối đa là 20 ký tự. (1 điểm)
SELECT TENKH
FROM KHACH_HANG
WHERE TENKH LIKE '[HNM]%' AND LEN(TENKH) <=20
--Câu 5: Hiển thị TenKH của tất cả các khách hàng có trong hệ thống, TenKH nào trùng nhau thì chỉ hiển thị một lần. 
--Sinh viên sử dụng hai cách khác nhau để thực hiện yêu cầu trên, mỗi cách sẽ được 0,5 điểm. (1 điểm)
-- C1
SELECT DISTINCT TENKH
FROM KHACH_HANG
-- C2
SELECT TENKH
FROM KHACH_HANG
GROUP BY TENKH

--Câu 6: Hiển thị MaDV, TenDV, DonViTinh, DonGia của những dịch vụ đi kèm có DonViTinh là “lon” và có DonGia lớn hơn 10,000 VNĐ 
--hoặc những dịch vụ đi kèm có DonViTinh là “Cai” và có DonGia nhỏ hơn 5,000 VNĐ. (1 điểm)
SELECT MaDV, TenDV, DonViTinh, DonGia
FROM DICH_VU_DI_KEM
WHERE (DONVITINH = 'LON' AND DONGIA > 10.000) 
OR (DONVITINH = 'CAI' AND DONGIA <5.000)
--Câu 7: Hiển thị MaDatPhong, MaPhong, LoaiPhong, SoKhachToiDa, GiaPhong, MaKH, TenKH, SoDT, NgayDat, GioBatDau, GioKetThuc, MaDichVu, SoLuong, DonGia 
--của những đơn đặt phòng có năm đặt phòng là “2016”, “2017” và đặt những phòng có giá phòng > 50,000 VNĐ/ 1 giờ. (1 điểm)
SELECT D.MaDatPhong, D.MaPhong, LoaiPhong, SoKhachToiDa, GiaPhong, D.MaKH, TenKH, SoDT, NgayDat, GioBatDau, GioKetThuc, C.MADV, SoLuong, DonGia
FROM DAT_PHONG D JOIN PHONG P ON D.MAPHONG = P.MAPHONG
JOIN KHACH_HANG K ON K.MAKH = D.MAKH
JOIN CHI_TIET_SU_DUNG_DV C ON C.MADATPHONG = D.MADATPHONG
JOIN DICH_VU_DI_KEM DI ON DI.MADV = C.MADV
WHERE YEAR(NGAYDAT) IN (2016, 2017) AND GIAPHONG > 50
--III.
--Câu 8: Hiển thị MaDatPhong, MaPhong, LoaiPhong, GiaPhong, TenKH, NgayDat, TongTienHat, TongTienSuDungDichVu, TongTienThanhToan 
--tương ứng với từng mã đặt phòng có trong bảng DAT_PHONG. Những đơn đặt phòng nào không sử dụng dịch vụ đi kèm thì cũng liệt kê thông tin của đơn đặt phòng đó ra. (1 điểm)

--TongTienHat = GiaPhong * (GioKetThuc – GioBatDau)
--TongTienSuDungDichVu = SoLuong * DonGia
--TongTienThanhToan = TongTienHat + sum (TongTienSuDungDichVu)

SELECT D.MADATPHONG, D.MaPhong, LoaiPhong, GiaPhong, TenKH, NgayDat, GiaPhong * (GioKetThuc - GioBatDau) AS TongTienHat,SUM(SOLUONG * DonGia) AS TongTienSuDungDichVu , GiaPhong * (GioKetThuc - GioBatDau) + SUM(SOLUONG * DonGia) AS TongTienThanhToan
FROM DAT_PHONG D JOIN KHACH_HANG K ON D.MAKH = K.MAKH
JOIN PHONG P ON P.MAPHONG = D.MAPHONG 
JOIN CHI_TIET_SU_DUNG_DV C ON C.MADATPHONG = D.MADATPHONG
JOIN DICH_VU_DI_KEM DI ON C.MADV = DI.MADV

--- Trên mạng
SELECT dp.MADATPHONG, p.MAPHONG, p.LOAIPHONG, p.GIAPHONG, kh.TENKH, dp.NGAYDAT, p.GIAPHONG * (GIOKETTHUC - GIOBATDAU)  AS TONGTIENHAT, SUM(ct.SOLUONG * dv.DONGIA) AS TONGTIENSUDUNGDV, ( p.GIAPHONG * (GIOKETTHUC - GIOBATDAU) + SUM(CT.SOLUONG * dv.DONGIA )) 
FROM dat_phong dp 
JOIN khach_hang kh 
on dp.MAKH = kh.MAKH 
JOIN phong p 
on dp.MAPHONG = p.MAPHONG 
JOIN chi_tiet_su_dung_dv ct 
ON dp.MADATPHONG = ct.MADATPHONG
JOIN dich_vu_di_kem dv 
ON ct.MADV = dv.MADV
GROUP BY dp.MADATPHONG
--Câu 9: Hiển thị MaKH, TenKH, DiaChi, SoDT của những khách hàng đã từng đặt phòng karaoke có địa chỉ ở “Hoa xuan”. (1 điểm)
SELECT MaKH, TenKH, DiaChi, SoDT
FROM KHACH_HANG K 
WHERE DIACHI ='HOA XUAN' AND MAKH IN (
SELECT MAKH
FROM DAT_PHONG)
-- C2
SELECT MaKH, TenKH, DiaChi, SoDT
FROM KHACH_HANG K 
WHERE DIACHI ='HOA XUAN' AND EXISTS (
SELECT *
FROM DAT_PHONG D
WHERE K.MAKH = D.MAKH)

--Câu 10: Hiển thị MaPhong, LoaiPhong, SoKhachToiDa, GiaPhong, SoLanDat của những phòng được khách hàng đặt có số lần đặt lớn hơn 2 lần 
--và trạng thái đặt là “Da dat”. (1 điểm)

SELECT P.MaPhong, LoaiPhong, SoKhachToiDa, GiaPhong, SUM (D.MAPHONG) SoLanDat
FROM DAT_PHONG D RIGHT JOIN PHONG P ON P.MAPHONG = D.MAPHONG 
GROUP BY P.MAPHONG, LoaiPhong, SoKhachToiDa, GiaPhong
HAVING SUM (D.MAPHONG) > 2