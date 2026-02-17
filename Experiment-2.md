# SQL Lab – Experiment 2

## Aim

To perform various data retrieval operations on the EMPLOYEE table using SQL SELECT statements.

---

## Question 1

List all distinct jobs in Employee.

### Query

```sql
SELECT DISTINCT JOB FROM EMPLOYEE;
```

### Output

| JOB       |
| --------- |
| CLERK     |
| SALESMAN  |
| MANAGER   |
| ANALYST   |
| PRESIDENT |

---

## Question 2

List all information about employees in Department Number 30.

### Query

```sql
SELECT * FROM EMPLOYEE
WHERE DEPTNO = 30;
```

### Output

| EMPNO | ENAME  | JOB      | SAL  | DEPTNO |
| ----- | ------ | -------- | ---- | ------ |
| 7499  | ALLEN  | SALESMAN | 1600 | 30     |
| 7521  | WARD   | SALESMAN | 1250 | 30     |
| 7698  | BLAKE  | MANAGER  | 2850 | 30     |
| 7844  | TURNER | SALESMAN | 1500 | 30     |
| 7900  | JAMES  | CLERK    | 950  | 30     |

---

## Question 3

Find all employees with department number greater than 20.

### Query

```sql
SELECT * FROM EMPLOYEE
WHERE DEPTNO > 20;
```

### Output

| EMPNO | ENAME  | DEPTNO |
| ----- | ------ | ------ |
| 7499  | ALLEN  | 30     |
| 7521  | WARD   | 30     |
| 7698  | BLAKE  | 30     |
| 7844  | TURNER | 30     |
| 7900  | JAMES  | 30     |

---

## Question 4

Find all managers as well as clerks in department 30.

### Query

```sql
SELECT * FROM EMPLOYEE
WHERE DEPTNO = 30
AND JOB IN ('MANAGER','CLERK');
```

### Output

| EMPNO | ENAME | JOB     | DEPTNO |
| ----- | ----- | ------- | ------ |
| 7698  | BLAKE | MANAGER | 30     |
| 7900  | JAMES | CLERK   | 30     |

---

## Question 5

List the employee name, employee numbers and department of all clerks.

### Query

```sql
SELECT EMPNO, ENAME, DEPTNO
FROM EMPLOYEE
WHERE JOB = 'CLERK';
```

### Output

| EMPNO | ENAME  | DEPTNO |
| ----- | ------ | ------ |
| 7369  | SMITH  | 20     |
| 7876  | ADAMS  | 20     |
| 7900  | JAMES  | 30     |
| 7934  | MILLER | 10     |

---

## Question 6

Find all managers not in department 30.

### Query

```sql
SELECT * FROM EMPLOYEE
WHERE JOB = 'MANAGER'
AND DEPTNO <> 30;
```

### Output

| EMPNO | ENAME | DEPTNO |
| ----- | ----- | ------ |
| 7566  | JONES | 20     |
| 7782  | CLARK | 10     |

---

## Question 7

List information about all employees in department 10 who are not manager or clerks.

### Query

```sql
SELECT * FROM EMPLOYEE
WHERE DEPTNO = 10
AND JOB NOT IN ('MANAGER','CLERK');
```

### Output

| EMPNO | ENAME | JOB       | DEPTNO |
| ----- | ----- | --------- | ------ |
| 7839  | KING  | PRESIDENT | 10     |

---

## Question 8

Find employees and jobs earning between 1200 and 1400.

### Query

```sql
SELECT ENAME, JOB, SAL
FROM EMPLOYEE
WHERE SAL BETWEEN 1200 AND 1400;
```

### Output

| ENAME  | JOB      | SAL  |
| ------ | -------- | ---- |
| WARD   | SALESMAN | 1250 |
| MILLER | CLERK    | 1300 |

---

## Question 9

List name and department number of employee who are clerks, analyst or salesman.

### Query

```sql
SELECT ENAME, DEPTNO
FROM EMPLOYEE
WHERE JOB IN ('CLERK','ANALYST','SALESMAN');
```

### Output

| ENAME  | DEPTNO |
| ------ | ------ |
| SMITH  | 20     |
| ALLEN  | 30     |
| WARD   | 30     |
| TURNER | 30     |
| ADAMS  | 20     |
| JAMES  | 30     |
| FORD   | 20     |
| MILLER | 10     |

---

## Question 10

List name and department number of employee whose names began with M.

### Query

```sql
SELECT ENAME, DEPTNO
FROM EMPLOYEE
WHERE ENAME LIKE 'M%';
```

### Output

| ENAME  | DEPTNO |
| ------ | ------ |
| MILLER | 10     |

---

## Conclusion
In this experiment, various SQL SELECT queries were performed using conditions such as DISTINCT, WHERE, BETWEEN, IN, NOT IN, and LIKE to retrieve specific data from the EMPLOYEE table.
