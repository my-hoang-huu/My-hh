--ĐỀ THI GIỮA KỲ_Năm học 2019-2020
-- Tên môn: Cơ sở dữ liệu



--Câu 1: (3 điểm)
--a. Vẽ ERD đơn giản (1.5 điểm)
--Khoa HTTT muốn quản lý đồ án do sinh viên thực hiện với những thông tin sau:
--- Mỗi môn học có mã số môn học, tên môn học, số tín chỉ lý thuyết, số tín chỉ thực hành.
--- Mỗi đồ án có mã số đồ án, tên đồ án, ngày nộp. Mỗi đồ án thuộc một môn học nào đó.
--- Mỗi sinh viên có mã số duy nhất để phân biệt với các sinh viên khác, có họ tên sinh viên,
--địa chỉ, số điện thoại. Mỗi sinh viên trong quá trình học sẽ phải thực hiện nhiều đồ án khác
--nhau, và mỗi đồ án do nhiều sinh viên cùng thực hiện.
--b. Chuyển ERD sang mô hình quan hệ (1.5 điểm)
--TenBH
--TheLoai MaPL
--TenPL
--(0, n) (1, n)
--MaBH BAIHAT Thuoc PLAYLIST
--(1, 1)
--SoThuTu
--TrinhBay
--(1, n)
--MaCS CASI
--HoTen
--GioiTinh
--Câu 2: (7 điểm)
--Cho lược đồ cơ sở dữ liệu “Quản lý nhân viên phục vụ của nhà hàng White Palace” có cấu trúc
--như sau:

NHANVIEN (MANV, HOTEN, NGSINH, CMND, CALV, MUCLUONG)
SANH (MASANH, TENSANH, LOAIBAN, SUCCHUA)
LOAITIEC (MALT, TENLT, YCMINBAN)
TIEC (MATIEC, CHUTIEC, MALT, MASANH, SOBAN, GIA, TGBD, TGKT)
PHUCVU (MANV, MATIEC, THOIGIAN)

--Lưu ý: thuộc tính gạch chân là khóa chính (thuộc tính)

--2.1. Mô tả các ràng buộc khóa ngoại của lược đồ trên bằng hình vẽ (database diagrams). (1 đ)

--2.2. Viết các biểu thức đại số quan hệ biểu diễn cho các câu truy vấn sau: (6 đ)
--a) Cho biết MANV, HOTEN của nhân viên nhà hàng có sinh nhật trong tháng 10. (1 đ)
--SELECT MANV, HOTEN
--FROM NHANVIEN
--WHERE MONTH(NGSINH) = 10
--b) Liệt kê tên chủ tiệc đã đặt tiệc tại sảnh tên ‘Crystal’ với sức chứa (SUCCHUA) từ 100 bàn trở lên. (1 đ)
SELECT MATIEC, CHUTIEC
FROM TIEC
WHERE MASANH = (SELECT MASANH FROM SANH WHERE TENSANH = ‘Crystal’ AND SUCCHUA >= 100)
--c) Cho biết các buổi tiệc (Mã tiệc, Tên chủ tiệc, Tên sảnh) có số bàn (SOBAN) từ 50 bàn trở lên thuộc loại tiệc ‘Đám cưới’ (TENLT). (1 đ)
SELECT MATIEC, CHUTIEC, TENSANH
FROM LOAITIEC L, TIEC T
WHERE L.MALT = T.MALT AND SOBAN >= 50 AND TENLT= ‘Đám cưới’

--d) Liệt kê tất cả loại tiệc (TENLT) và chủ tiệc (CHUTIEC) cùng số lượng bàn (SOBAN) đã đặt cho buổi tiệc nếu có. (1 đ)
SELECT TENLT, CHUTIEC, SOBAN
FROM LOAITIEC L JOIN LEFT TIEC 
ON L.MALT = T.MALT
--e) Cho biết nhân viên nào (MANV, HOTEN) phục vụ tất cả các tiệc có thời gian bắt đầu tiệc là 17g30 (TGBD=’17g30’). (1 đ)
SELECT MANV, HOTEN
FROM NHANVIEN N JOIN PHUCVU P ON N.MANV = P.MANV JOIN TIEC T ON T.MATIEC = P.MATIEC
WHERE TGBD=’17g30’
--f) Tính doanh thu từng loại tiệc, thông tin hiển thị gồm: TENLT, DOANHTHU. (1 đ)
SELECT T.MALT, TENLT, SUM(GIA)DOANHTHU
FROM LOAITIEC L, TIEC T
WHERE L.MALT = T.MALT
GROUP BY T.MALT, TENLT



NHANVIEN (MANV, HOTEN, NGSINH, CMND, CALV, MUCLUONG)
SANH (MASANH, TENSANH, LOAIBAN, SUCCHUA)
LOAITIEC (MALT, TENLT, YCMINBAN)
TIEC (MATIEC, CHUTIEC, MALT, MASANH, SOBAN, GIA, TGBD, TGKT)
PHUCVU (MANV, MATIEC, THOIGIAN)