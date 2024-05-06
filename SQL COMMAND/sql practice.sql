-- CREATE TABLE `employee`.`myemployee` (
--     id INT AUTO_INCREMENT PRIMARY KEY,
--     first_name VARCHAR(255),
--     last_name VARCHAR(255),
--     salary INT,
--     joining_date DATE,
--     department VARCHAR(100)
-- );


-- INSERT INTO `employee`.`myemployee` (first_name, last_name, salary, joining_date, department)
-- VALUES
--     ('Maruf', 'Hossain', 100000, '2023-01-15', 'Software Engineer'),
--     ('Hedaet', 'Hossen', 60000, '2022-11-20', 'Health'),
--     ('Lishan', 'Ahmed', 55000, '2023-03-10', 'HR'),
--     ('Nahiduzzaman', 'Nahid', 55000, '2023-03-10', 'Bank'),
--     ('Fahim', 'Ahmed', 35000, '2023-03-10', 'EEE'),
--     ('Kh Istiak', 'Ahmed', 85000, '2023-03-10', 'HR');

-- SET SQL_SAFE_UPDATES = 0;
-- UPDATE `employee`.`myemployee`
-- SET City = 
--     CASE 
--         WHEN id = 1 THEN 'Rangpur'
--         WHEN id = 2 THEN 'Dhaka'
--         WHEN id = 3 THEN 'Rangpur'
--         WHEN id = 4 THEN 'Dhaka'
--         WHEN id = 5 THEN 'Dinajpur'
--         WHEN id = 6 THEN 'Dhaka'
--        
--     END;

-- select count(id) as city_count, City
-- from employee.myemployee
-- group by City
-- order by count(id) desc;

