<div align="center">

# SQL Lab – Experiment 0  
### MariaDB / MySQL Implementation

</div>

---

## Aim

To create a database named `2cse_23_1083`, create EMPLOYEE and DEPARTMENT tables as per given constraints, insert records and display data using MariaDB/MySQL.

---

<hr>

## Question 1 – Create Database

### Query
```sql
CREATE DATABASE 2cse_23_1083;
```

### Output

| Status |
|--------|
| Query OK, 1 row affected |

---

## Question 2 – Use Database

### Query
```sql
USE 2cse_23_1083;
```

### Output

| Status |
|--------|
| Database changed |

---

## Question 3 – Create Tables

### Query
```sql
CREATE TABLE DEPARTMENT (
    DEPTNO INT(2) PRIMARY KEY,
    DNAME VARCHAR(15) NOT NULL
);

CREATE TABLE EMPLOYEE (
    EMPNO INT(4) PRIMARY KEY,
    ENAME VARCHAR(20) NOT NULL,
    JOB VARCHAR(20),
    MGR INT(4),
    HIREDATE DATE,
    SAL INT(7),
    COMM INT(7),
    DEPTNO INT(2),
    FOREIGN KEY (DEPTNO) REFERENCES DEPARTMENT(DEPTNO)
);
```

### Output

| Status |
|--------|
| Query OK, 0 rows affected |
| Query OK, 0 rows affected |

---

## Question 4 – Describe Tables

### Query
```sql
DESC EMPLOYEE;
DESC DEPARTMENT;
```

### EMPLOYEE Structure

| Field    | Type        | Null | Key |
|----------|------------|------|-----|
| EMPNO    | int(4)     | NO   | PRI |
| ENAME    | varchar(20)| NO   |     |
| JOB      | varchar(20)| YES  |     |
| MGR      | int(4)     | YES  |     |
| HIREDATE | date       | YES  |     |
| SAL      | int(7)     | YES  |     |
| COMM     | int(7)     | YES  |     |
| DEPTNO   | int(2)     | YES  | MUL |

### DEPARTMENT Structure

| Field  | Type        | Null | Key |
|--------|------------|------|-----|
| DEPTNO | int(2)     | NO   | PRI |
| DNAME  | varchar(15)| NO   |     |

---

<hr>

<div align="center">

**End of Experiment 0**

</div>
