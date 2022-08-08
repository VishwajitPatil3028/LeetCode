# Write your MySQL query statement below

# select name as Customers from Customers where id not in (select customerId from Orders);

SELECT Name as Customers
FROM Customers LEFT JOIN Orders ON Customers.Id = Orders.customerId
WHERE customerId IS NULL;