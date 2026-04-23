# SQL Lab – Experiment 0

## Aim
To create a database named `2cse_23_1083`, create `DEPARTMENT` and `EMPLOYEE` tables with required constraints, insert records, and display data using MariaDB/MySQL.

---

## Question 1
Create a new database.

### Query
```sql
CREATE DATABASE 2cse_23_1083;
```

### Output

| Message                  |
|--------------------------|
| Query OK, 1 row affected |

---

## Question 2
Show all databases.

### Query
```sql
SHOW DATABASES;
```

### Output

| Database           |
|--------------------|
| 2cse_23_1083       |
| information_schema |
| mysql              |
| performance_schema |
| phpmyadmin         |
| test               |

---

## Question 3
Use the created database.

### Query
```sql
USE 2cse_23_1083;
```

### Output

| Message          |
|------------------|
| Database changed |

---

## Question 4
Create DEPARTMENT and EMPLOYEE tables.

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

| Message                   |
|---------------------------|
| Query OK, 0 rows affected |
| Query OK, 0 rows affected |

---

## Question 5
Show all tables.

### Query
```sql
SHOW TABLES;
```

### Output

| Tables_in_2cse_23_1083 |
|------------------------|
| department             |
| employee               |

---

## Question 6
Describe both tables.

### Query
```sql
DESC EMPLOYEE;
DESC DEPARTMENT;
```

### Output

#### EMPLOYEE Table

| Field    | Type        | Null | Key | Default | Extra |
|----------|------------|------|-----|---------|-------|
| EMPNO    | int(4)     | NO   | PRI | NULL    |       |
| ENAME    | varchar(20)| NO   |     | NULL    |       |
| JOB      | varchar(20)| YES  |     | NULL    |       |
| MGR      | int(4)     | YES  |     | NULL    |       |
| HIREDATE | date       | YES  |     | NULL    |       |
| SAL      | int(7)     | YES  |     | NULL    |       |
| COMM     | int(7)     | YES  |     | NULL    |       |
| DEPTNO   | int(2)     | YES  | MUL | NULL    |       |

#### DEPARTMENT Table

| Field  | Type        | Null | Key | Default | Extra |
|--------|------------|------|-----|---------|-------|
| DEPTNO | int(2)     | NO   | PRI | NULL    |       |
| DNAME  | varchar(15)| NO   |     | NULL    |       |

---

## Question 7
Insert values into both tables.

### Query
```sql
INSERT INTO DEPARTMENT VALUES 
(10, 'RESEARCH'),
(20, 'ACCOUNTING'),
(30, 'SALES'),
(40, 'OPERATIONS');

INSERT INTO EMPLOYEE VALUES
(7369,'SMITH','CLERK',7902,'1980-12-17',800,NULL,20),
(7499,'ALLEN','SALESMAN',7698,'1981-02-20',1600,300,30),
(7521,'WARD','SALESMAN',7698,'1981-02-22',1250,300,30),
(7566,'JONES','MANAGER',7839,'1981-04-02',2975,NULL,20),
(7654,'MARTIN','SALESMAN',7698,'1981-09-28',1250,1400,30),
(7698,'BLAKE','MANAGER',7839,'1981-05-01',2850,NULL,30),
(7782,'CLARK','MANAGER',7839,'1981-06-09',2450,NULL,10),
(7788,'SCOTT','ANALYST',7566,'1982-12-09',3000,NULL,20),
(7839,'KING','PRESIDENT',NULL,'1981-11-17',5000,NULL,10),
(7844,'TURNER','SALESMAN',7698,'1981-09-08',1500,0,30),
(7876,'ADAMS','CLERK',7788,'1983-01-12',1100,NULL,20),
(7900,'JAMES','CLERK',7698,'1981-12-03',950,NULL,30),
(7902,'FORD','ANALYST',7566,'1981-12-03',3000,NULL,20),
(7934,'MILLER','CLERK',7782,'1982-01-23',1300,NULL,10);
```

### Output

| Message                   |
|---------------------------|
| Query OK, 4 rows affected |
| Query OK, 14 rows affected|

---

## Question 8
Display all records from both tables.

### Query
```sql
SELECT * FROM DEPARTMENT;
SELECT * FROM EMPLOYEE;
```

### Output

#### DEPARTMENT Table

| DEPTNO | DNAME      |
|--------|------------|
| 10     | RESEARCH   |
| 20     | ACCOUNTING |
| 30     | SALES      |
| 40     | OPERATIONS |

#### EMPLOYEE Table

| EMPNO | ENAME  | JOB       | MGR  | HIREDATE  | SAL  | COMM | DEPTNO |
|-------|--------|----------|------|-----------|------|------|--------|
| 7369  | SMITH  | CLERK    | 7902 | 1980-12-17| 800  | NULL | 20     |
| 7499  | ALLEN  | SALESMAN | 7698 | 1981-02-20| 1600 | 300  | 30     |
| 7521  | WARD   | SALESMAN | 7698 | 1981-02-22| 1250 | 300  | 30     |
| 7566  | JONES  | MANAGER  | 7839 | 1981-04-02| 2975 | NULL | 20     |
| 7654  | MARTIN | SALESMAN | 7698 | 1981-09-28| 1250 | 1400 | 30     |
| 7698  | BLAKE  | MANAGER  | 7839 | 1981-05-01| 2850 | NULL | 30     |
| 7782  | CLARK  | MANAGER  | 7839 | 1981-06-09| 2450 | NULL | 10     |
| 7788  | SCOTT  | ANALYST  | 7566 | 1982-12-09| 3000 | NULL | 20     |
| 7839  | KING   | PRESIDENT| NULL | 1981-11-17| 5000 | NULL | 10     |
| 7844  | TURNER | SALESMAN | 7698 | 1981-09-08| 1500 | 0    | 30     |
| 7876  | ADAMS  | CLERK    | 7788 | 1983-01-12| 1100 | NULL | 20     |
| 7900  | JAMES  | CLERK    | 7698 | 1981-12-03| 950  | NULL | 30     |
| 7902  | FORD   | ANALYST  | 7566 | 1981-12-03| 3000 | NULL | 20     |
| 7934  | MILLER | CLERK    | 7782 | 1982-01-23| 1300 | NULL | 10     |

---

## Conclusion
Successfully created the database, defined tables with constraints, inserted records, and retrieved data using basic SQL commands in MariaDB/MySQL.
