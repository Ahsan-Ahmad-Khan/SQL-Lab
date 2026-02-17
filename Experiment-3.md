<div align="center">

# SQL Lab – Experiment 3
### <span style="color:gray;">Conditional & Sorting Queries using EMPLOYEE Table</span>

</div>

---

## Aim

To perform advanced data retrieval using ORDER BY, LIKE, logical operators, and salary-based conditions in MariaDB/MySQL.

---

## Question 1 – Employees in Dept 30 in descending order of salary

### Query
```sql
SELECT ENAME, JOB, SAL
FROM EMPLOYEE
WHERE DEPTNO = 30
ORDER BY SAL DESC;
```

### Output

<table>
<tr><th>ENAME</th><th>JOB</th><th>SAL</th></tr>
<tr><td>BLAKE</td><td>MANAGER</td><td>2850</td></tr>
<tr><td>ALLEN</td><td>SALESMAN</td><td>1600</td></tr>
<tr><td>TURNER</td><td>SALESMAN</td><td>1500</td></tr>
<tr><td>WARD</td><td>SALESMAN</td><td>1250</td></tr>
<tr><td>MARTIN</td><td>SALESMAN</td><td>1250</td></tr>
<tr><td>JAMES</td><td>CLERK</td><td>950</td></tr>
</table>

---

## Question 2 – Job and DeptNo (Name begins with A and ends with N, 5 letters)

### Query
```sql
SELECT JOB, DEPTNO
FROM EMPLOYEE
WHERE ENAME LIKE 'A___N';
```

### Output

<table>
<tr><th>JOB</th><th>DEPTNO</th></tr>
<tr><td>SALESMAN</td><td>30</td></tr>
</table>

(Employee: ALLEN)

---

## Question 3 – Employees whose name starts with S

### Query
```sql
SELECT ENAME
FROM EMPLOYEE
WHERE ENAME LIKE 'S%';
```

### Output

<table>
<tr><th>ENAME</th></tr>
<tr><td>SMITH</td></tr>
<tr><td>SCOTT</td></tr>
</table>

---

## Question 4 – Employees whose name ends with S

### Query
```sql
SELECT ENAME
FROM EMPLOYEE
WHERE ENAME LIKE '%S';
```

### Output

<table>
<tr><th>ENAME</th></tr>
<tr><td>JONES</td></tr>
<tr><td>ADAMS</td></tr>
<tr><td>JAMES</td></tr>
</table>

---

## Question 5 – Employees in Dept 10, 20, 40 or working as Clerk, Salesman or Analyst

### Query
```sql
SELECT ENAME, DEPTNO, JOB
FROM EMPLOYEE
WHERE DEPTNO IN (10,20,40)
OR JOB IN ('CLERK','SALESMAN','ANALYST');
```

### Output
(Multiple matching records returned)

---

## Question 6 – Employee number and names who earn commission

### Query
```sql
SELECT EMPNO, ENAME
FROM EMPLOYEE
WHERE COMM IS NOT NULL
AND COMM > 0;
```

### Output

<table>
<tr><th>EMPNO</th><th>ENAME</th></tr>
<tr><td>7499</td><td>ALLEN</td></tr>
<tr><td>7521</td><td>WARD</td></tr>
<tr><td>7654</td><td>MARTIN</td></tr>
</table>

---

## Question 7 – Employee number and total salary (Salary + Commission)

### Query
```sql
SELECT EMPNO, (SAL + IFNULL(COMM,0)) AS TOTAL_SALARY
FROM EMPLOYEE;
```

### Output
(Displays total salary for each employee)

---

## Question 8 – Employee number and annual salary

### Query
```sql
SELECT EMPNO, (SAL * 12) AS ANNUAL_SALARY
FROM EMPLOYEE;
```

### Output
(Displays annual salary for each employee)

---

## Question 9 – Clerks earning more than 3000

### Query
```sql
SELECT ENAME
FROM EMPLOYEE
WHERE JOB = 'CLERK'
AND SAL > 3000;
```

### Output

<table>
<tr><th>ENAME</th></tr>
<tr><td>No rows returned</td></tr>
</table>

---

## Question 10 – Clerk, Salesman or Analyst earning more than 3000

### Query
```sql
SELECT ENAME
FROM EMPLOYEE
WHERE JOB IN ('CLERK','SALESMAN','ANALYST')
AND SAL > 3000;
```

### Output

<table>
<tr><th>ENAME</th></tr>
<tr><td>No rows returned</td></tr>
</table>

---

<div align="center">

### Experiment 3 Completed Successfully

</div>
