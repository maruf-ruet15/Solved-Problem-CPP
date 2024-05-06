-- CREATE SCHEMA customer;

-- CREATE TABLE customer.customer (
--     customer_id INT PRIMARY KEY,
--     name VARCHAR(50),
--     city VARCHAR(50),
--     country VARCHAR(50)
-- );

-- CREATE TABLE customer.order (
--     order_id INT PRIMARY KEY,
--     customer_id INT,
--     FOREIGN KEY (customer_id) REFERENCES customer.customer(customer_id)
-- );

-- -- Inserting data into the customer table
-- INSERT INTO customer.customer (customer_id, name, city, country) VALUES
-- (1, 'John Doe', 'New York', 'USA'),
-- (2, 'Alice Smith', 'London', 'UK'),
-- (3, 'Bob Johnson', 'Paris', 'France'),
-- (4, 'Emma Lee', 'Tokyo', 'Japan'),
-- (5, 'Michael Brown', 'Sydney', 'Australia'),
-- (6, 'Sophia Garcia', 'Berlin', 'Germany'),
-- (7, 'David Kim', 'Seoul', 'South Korea'),
-- (8, 'Maria Martinez', 'Mexico City', 'Mexico'),
-- (9, 'Daniel Wong', 'Shanghai', 'China'),
-- (10, 'Luisa Rossi', 'Rome', 'Italy');

-- -- Inserting data into the order table
-- INSERT INTO customer.order (order_id, customer_id) VALUES
-- (101, 1),
-- (102, 2),
-- (103, 3),
-- (104, 4),
-- (105, 5),
-- (106, 6),
-- (107, 7),
-- (108, 8),
-- (109, 9),
-- (110, 10);



