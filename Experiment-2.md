<div align="center">

# SQL Lab – Experiment 2
### <span style="color:gray;">Retrieving Data using EMPLOYEE Table</span>

</div>

---

## Aim

To retrieve data from the EMPLOYEE table using various SELECT queries and conditions in MariaDB/MySQL.

---

## Question 1 – List all distinct jobs in Employee

### Query
```sql
SELECT DISTINCT JOB FROM EMPLOYEE;
```

### Output

<table>
<tr><th>JOB</th></tr>
<tr><td>CLERK</td></tr>
<tr><td>SALESMAN</td></tr>
<tr><td>MANAGER</td></tr>
<tr><td>ANALYST</td></tr>
<tr><td>PRESIDENT</td></tr>
</table>

---

## Question 2 – List all information about employees in Department 30

### Query
```sql
SELECT * FROM EMPLOYEE
WHERE DEPTNO = 30;
```

### Output

<table>
<tr><th>EMPNO</th><th>ENAME</th><th>JOB</th><th>SAL</th></tr>
<tr><td>7499</td><td>ALLEN</td><td>SALESMAN</td><td>1600</td></tr>
<tr><td>7521</td><td>WARD</td><td>SALESMAN</td><td>1250</td></tr>
<tr><td>7654</td><td>MARTIN</td><td>SALESMAN</td><td>1250</td></tr>
<tr><td>7698</td><td>BLAKE</td><td>MANAGER</td><td>2850</td></tr>
<tr><td>7844</td><td>TURNER</td><td>SALESMAN</td><td>1500</td></tr>
<tr><td>7900</td><td>JAMES</td><td>CLERK</td><td>950</td></tr>
</table>

---

## Question 3 – Find employees with department number greater than 20

### Query
```sql
SELECT EMPNO, ENAME, DEPTNO
FROM EMPLOYEE
WHERE DEPTNO > 20;
```

### Output

<table>
<tr><th>EMPNO</th><th>ENAME</th><th>DEPTNO</th></tr>
<tr><td>7499</td><td>ALLEN</td><td>30</td></tr>
<tr><td>7521</td><td>WARD</td><td>30</td></tr>
<tr><td>7654</td><td>MARTIN</td><td>30</td></tr>
<tr><td>7698</td><td>BLAKE</td><td>30</td></tr>
<tr><td>7844</td><td>TURNER</td><td>30</td></tr>
<tr><td>7900</td><td>JAMES</td><td>30</td></tr>
</table>

---

## Question 4 – Managers and Clerks in Department 30

### Query
```sql
SELECT * FROM EMPLOYEE
WHERE DEPTNO = 30
AND JOB IN ('MANAGER','CLERK');
```

### Output

<table>
<tr><th>EMPNO</th><th>ENAME</th><th>JOB</th></tr>
<tr><td>7698</td><td>BLAKE</td><td>MANAGER</td></tr>
<tr><td>7900</td><td>JAMES</td><td>CLERK</td></tr>
</table>

---

## Question 5 – Employee name, number and department of all clerks

### Query
```sql
SELECT ENAME, EMPNO, DEPTNO
FROM EMPLOYEE
WHERE JOB = 'CLERK';
```

### Output

<table>
<tr><th>ENAME</th><th>EMPNO</th><th>DEPTNO</th></tr>
<tr><td>SMITH</td><td>7369</td><td>20</td></tr>
<tr><td>ADAMS</td><td>7876</td><td>20</td></tr>
<tr><td>JAMES</td><td>7900</td><td>30</td></tr>
<tr><td>MILLER</td><td>7934</td><td>10</td></tr>
</table>

---

## Question 6 – Managers not in Department 30

### Query
```sql
SELECT ENAME, DEPTNO
FROM EMPLOYEE
WHERE JOB = 'MANAGER'
AND DEPTNO <> 30;
```

### Output

<table>
<tr><th>ENAME</th><th>DEPTNO</th></tr>
<tr><td>JONES</td><td>20</td></tr>
<tr><td>CLARK</td><td>10</td></tr>
</table>

---

## Question 7 – Employees in Department 10 who are not Manager or Clerk

### Query
```sql
SELECT * FROM EMPLOYEE
WHERE DEPTNO = 10
AND JOB NOT IN ('MANAGER','CLERK');
```

### Output

<table>
<tr><th>EMPNO</th><th>ENAME</th><th>JOB</th></tr>
<tr><td>7839</td><td>KING</td><td>PRESIDENT</td></tr>
</table>

---

## Question 8 – Employees earning between 1200 and 1400

### Query
```sql
SELECT ENAME, JOB, SAL
FROM EMPLOYEE
WHERE SAL BETWEEN 1200 AND 1400;
```

### Output

<table>
<tr><th>ENAME</th><th>JOB</th><th>SAL</th></tr>
<tr><td>WARD</td><td>SALESMAN</td><td>1250</td></tr>
<tr><td>MARTIN</td><td>SALESMAN</td><td>1250</td></tr>
<tr><td>MILLER</td><td>CLERK</td><td>1300</td></tr>
</table>

---

## Question 9 – Clerks, Analysts or Salesmen

### Query
```sql
SELECT ENAME, DEPTNO
FROM EMPLOYEE
WHERE JOB IN ('CLERK','ANALYST','SALESMAN');
```

### Output

<table>
<tr><th>ENAME</th><th>DEPTNO</th></tr>
<tr><td>SMITH</td><td>20</td></tr>
<tr><td>ALLEN</td><td>30</td></tr>
<tr><td>WARD</td><td>30</td></tr>
<tr><td>MARTIN</td><td>30</td></tr>
<tr><td>TURNER</td><td>30</td></tr>
<tr><td>ADAMS</td><td>20</td></tr>
<tr><td>JAMES</td><td>30</td></tr>
<tr><td>MILLER</td><td>10</td></tr>
<tr><td>SCOTT</td><td>20</td></tr>
<tr><td>FORD</td><td>20</td></tr>
</table>

---

## Question 10 – Employees whose names begin with M

### Query
```sql
SELECT ENAME, DEPTNO
FROM EMPLOYEE
WHERE ENAME LIKE 'M%';
```

### Output

<table>
<tr><th>ENAME</th><th>DEPTNO</th></tr>
<tr><td>MARTIN</td><td>30</td></tr>
<tr><td>MILLER</td><td>10</td></tr>
</table>

---

<div align="center">

### Experiment 2 Completed Successfully

</div>
