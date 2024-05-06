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
--     ('kabir', 'Hossain', 139000, '2024-01-15', 'Software Engineer'),
--     ('john', 'cena', 43000, '2018-11-20', 'Health'),
--     ('Randy', 'orton', 57000, '2013-03-10', 'HR'),
--     ('HHH', 'Nahid', 34000, '2022-03-10', 'Bank'),
--     ('Tamim ', 'Ahmed', 22000, '2021-03-10', 'EEE'),
--     ('Kh Molla', 'Ahmed', 15000, '2020-03-10', 'HR');

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
-- 		WHEN id = 7 THEN 'Rangpur'
--         WHEN id = 8 THEN 'Dhaka'
--         WHEN id = 9 THEN 'Rangpur'
--         WHEN id = 10 THEN 'Dhaka'
--         WHEN id = 11 THEN 'Dinajpur'
--         WHEN id = 12 THEN 'Dhaka'
--        
--     END;

-- select count(id) as city_count, City
-- from employee.myemployee
-- group by City
-- order by count(id) desc;

-- select avg(salary) as average_salary, city
-- from employee.myemployee
-- group by city
-- having avg(salary) >50000
-- order by avg(salary) asc;


-- select * from employee.myemployee
-- where department NOT IN ("HR","Software Engineer");

select count(id),department
from employee.myemployee
group by department







