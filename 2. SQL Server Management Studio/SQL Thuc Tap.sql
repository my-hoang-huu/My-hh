--https://nguyenvanhieu.vn/bai-tap-sql-co-ban/
SET DATEFORMAT DMY
CREATE DATABASE ThucTap
USE ThucTap

CREATE TABLE KHOA (
MAKHOA CHAR(10) PRIMARY KEY, 
TENKHOA CHAR(30), 
DIENTHOAI CHAR(10)
)
CREATE TABLE GIANGVIEN (
MAGV INT PRIMARY KEY, 
HOTENGV CHAR(30), 
LUONG DECIMAL(5,2), 
MAKHOA CHAR(10) FOREIGN KEY REFERENCES KHOA(MAKHOA)
)
CREATE TABLE SINHVIEN (
MASV INT PRIMARY KEY, 
HOTENSV CHAR(30), 
MAKHOA CHAR(10) FOREIGN KEY REFERENCES KHOA(MAKHOA), 
NAMSINH INT, 
QUEQUAN CHAR(30)
)
CREATE TABLE DETAI (
MADT CHAR(10) PRIMARY KEY, 
TENDT CHAR(30), 
KINHPHI INT, 
NOITHUCTAP CHAR(30)
)
CREATE TABLE HUONGDAN (
MASV INT PRIMARY KEY, 
MADT CHAR(10) FOREIGN KEY REFERENCES DETAI(MADT), 
MAGV INT FOREIGN KEY REFERENCES GIANGVIEN(MAGV), 
KETQUA DECIMAL(5,2)
)

--1.	Cho biết mã số và tên của các đề tài do giảng viên ‘Tran son’ hướng dẫn
SELECT D.MADT, TENDT
FROM DETAI D JOIN HUONGDAN H
ON D.MADT = H.MADT 
JOIN GIANGVIEN G 
ON G.MAGV = H.MAGV
WHERE HOTENGV = 'Tran Son'
--2.	Cho biết tên đề tài không có sinh viên nào thực tập
SELECT MADT, TENDT
FROM DETAI
WHERE MADT NOT IN (
SELECT MADT
FROM HUONGDAN)
--3.	Cho biết mã số, họ tên, tên khoa của các giảng viên hướng dẫn từ 3 sinh viên trở lên.
SELECT MAGV, HOTENGV, TENKHOA
FROM GIANGVIEN G JOIN KHOA K ON G.MAKHOA = K.MAKHOA
WHERE MAGV IN (
SELECT MAGV
FROM HUONGDAN
GROUP BY MAGV
HAVING COUNT(MASV) >= 3)
--4.	Cho biết mã số, tên đề tài của đề tài có kinh phí cao nhất
SELECT TOP 1 WITH TIES MAX(KINHPHI) MAX_KINHPHI, MADT, TENDT
FROM DETAI 
--5.	Cho biết mã số và tên các đề tài có nhiều hơn 2 sinh viên tham gia thực tập
--6.	Đưa ra mã số, họ tên và điểm của các sinh viên khoa ‘DIALY và QLTN’
--7.	Đưa ra tên khoa, số lượng sinh viên của mỗi khoa
--8.	Cho biết thông tin về các sinh viên thực tập tại quê nhà
--9.	Hãy cho biết thông tin về những sinh viên chưa có điểm thực tập
--10.	Đưa ra danh sách gồm mã số, họ tên các sinh viên có điểm thực tập bằng 0
