<div align="center">

# SQL Lab – Experiment 1
### <span style="color:gray;">MariaDB / MySQL Implementation</span>

</div>

---

## Aim

To perform table creation using existing data, deletion, update, alter, and drop operations in MariaDB/MySQL.

---

## Question 1 – Create Employee_Master Table

Create `Employee_Master` table using data from `EMPLOYEE` table.

### Query
```sql
CREATE TABLE Employee_Master AS
SELECT * FROM EMPLOYEE;
```

### Output

<table>
<tr><th>Status</th></tr>
<tr><td>Query OK, 14 rows affected</td></tr>
</table>

---

## Question 2 – Delete Records (DeptNo = 10)

Department 10 contains 3 employees: CLARK, KING, MILLER.

### Query
```sql
DELETE FROM Employee_Master
WHERE DEPTNO = 10;
```

### Output

<table>
<tr><th>Status</th></tr>
<tr><td>Query OK, 3 rows affected</td></tr>
</table>

---

## Question 3 – Increase Salary by 10% (DeptNo = 20)

Department 20 contains 5 employees.

### Query
```sql
UPDATE Employee_Master
SET SAL = SAL + (SAL * 0.10)
WHERE DEPTNO = 20;
```

### Output

<table>
<tr><th>Status</th></tr>
<tr><td>Query OK, 5 rows affected</td></tr>
<tr><td>Rows matched: 5 &nbsp;&nbsp; Changed: 5 &nbsp;&nbsp; Warnings: 0</td></tr>
</table>

---

## Question 4 – Alter Salary Column Size

### Query
```sql
ALTER TABLE Employee_Master
MODIFY SAL DECIMAL(10,2);
```

### Output

<table>
<tr><th>Status</th></tr>
<tr><td>Query OK, 11 rows affected</td></tr>
<tr><td>Records: 11 &nbsp;&nbsp; Duplicates: 0 &nbsp;&nbsp; Warnings: 0</td></tr>
</table>

---

## Question 5 – Drop Employee_Master Table

### Query
```sql
DROP TABLE Employee_Master;
```

### Output

<table>
<tr><th>Status</th></tr>
<tr><td>Query OK</td></tr>
</table>

---

<div align="center">

### Experiment 1 Completed Successfully

</div>
