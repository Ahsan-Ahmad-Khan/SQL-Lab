# SQL Lab – Experiment 1

## Aim
To perform table creation using existing data, deletion, update, alter, and drop operations in MariaDB/MySQL.

---

## Question 1  
Create `Employee_Master` table using data from `EMPLOYEE` table.

### Query
```sql
CREATE TABLE Employee_Master AS
SELECT * FROM EMPLOYEE;
```

### Output

| Message                    |
|----------------------------|
| Query OK, 14 rows affected |

---

## Question 2  
Delete all records from `Employee_Master` whose `DEPTNO` is 10.

(Dept 10 contains 3 employees)

### Query
```sql
DELETE FROM Employee_Master
WHERE DEPTNO = 10;
```

### Output

| Message                   |
|---------------------------|
| Query OK, 3 rows affected |

---

## Question 3  
Increase salary by 10% for employees whose `DEPTNO` is 20.

(Dept 20 contains 5 employees)

### Query
```sql
UPDATE Employee_Master
SET SAL = SAL + (SAL * 0.10)
WHERE DEPTNO = 20;
```

### Output

| Message                   |
|---------------------------|
| Query OK, 5 rows affected |
| Rows matched: 5 Changed: 5 |

---

## Question 4  
Alter column `SAL` to size `DECIMAL(10,2)` in `Employee_Master`.

### Query
```sql
ALTER TABLE Employee_Master
MODIFY SAL DECIMAL(10,2);
```

### Output

| Message                    |
|----------------------------|
| Query OK, 11 rows affected |
| Records: 11 Duplicates: 0  |

---

## Question 5  
Drop `Employee_Master` table.

### Query
```sql
DROP TABLE Employee_Master;
```

### Output

| Message  |
|----------|
| Query OK |

---

## Conclusion
Successfully performed table creation using existing table data, record deletion, salary update, column modification, and table deletion using SQL commands in MariaDB/MySQL.
