# SQL Lab – Experiment 0

## Aim
To create a database named `2cse_23_1083`, create `DEPARTMENT` and `EMPLOYEE` tables with constraints, insert records, and display data using MariaDB/MySQL.

---

## Question 1
Create a new database.

### Query
```sql
CREATE DATABASE 2cse_23_1083;
```

### Output

<table>
<tr><th>Message</th></tr>
<tr><td>Query OK, 1 row affected</td></tr>
</table>

---

## Question 2
Show all databases.

### Query
```sql
SHOW DATABASES;
```

### Output

<table>
<tr><th>Database</th></tr>
<tr><td>2cse_23_1083</td></tr>
<tr><td>information_schema</td></tr>
<tr><td>mysql</td></tr>
<tr><td>performance_schema</td></tr>
<tr><td>phpmyadmin</td></tr>
<tr><td>test</td></tr>
</table>

---

## Question 3
Use the created database.

### Query
```sql
USE 2cse_23_1083;
```

### Output

<table>
<tr><th>Message</th></tr>
<tr><td>Database changed</td></tr>
</table>

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

<table>
<tr><th>Message</th></tr>
<tr><td>Query OK, 0 rows affected</td></tr>
<tr><td>Query OK, 0 rows affected</td></tr>
</table>

---

## Question 5
Show all tables.

### Query
```sql
SHOW TABLES;
```

### Output

<table>
<tr><th>Tables_in_2cse_23_1083</th></tr>
<tr><td>department</td></tr>
<tr><td>employee</td></tr>
</table>

---

## Question 6
Describe both tables.

### Query
```sql
DESC EMPLOYEE;
DESC DEPARTMENT;
```

### Output

### EMPLOYEE Table

<table>
<tr>
<th>Field</th><th>Type</th><th>Null</th><th>Key</th><th>Default</th><th>Extra</th>
</tr>
<tr><td>EMPNO</td><td>int(4)</td><td>NO</td><td>PRI</td><td>NULL</td><td></td></tr>
<tr><td>ENAME</td><td>varchar(20)</td><td>NO</td><td></td><td>NULL</td><td></td></tr>
<tr><td>JOB</td><td>varchar(20)</td><td>YES</td><td></td><td>NULL</td><td></td></tr>
<tr><td>MGR</td><td>int(4)</td><td>YES</td><td></td><td>NULL</td><td></td></tr>
<tr><td>HIREDATE</td><td>date</td><td>YES</td><td></td><td>NULL</td><td></td></tr>
<tr><td>SAL</td><td>int(7)</td><td>YES</td><td></td><td>NULL</td><td></td></tr>
<tr><td>COMM</td><td>int(7)</td><td>YES</td><td></td><td>NULL</td><td></td></tr>
<tr><td>DEPTNO</td><td>int(2)</td><td>YES</td><td>MUL</td><td>NULL</td><td></td></tr>
</table>

### DEPARTMENT Table

<table>
<tr>
<th>Field</th><th>Type</th><th>Null</th><th>Key</th><th>Default</th><th>Extra</th>
</tr>
<tr><td>DEPTNO</td><td>int(2)</td><td>NO</td><td>PRI</td><td>NULL</td><td></td></tr>
<tr><td>DNAME</td><td>varchar(15)</td><td>NO</td><td></td><td>NULL</td><td></td></tr>
</table>

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

<table>
<tr><th>Message</th></tr>
<tr><td>Query OK, 4 rows affected</td></tr>
<tr><td>Query OK, 14 rows affected</td></tr>
</table>

---

## Question 8
Display all records from both tables.

### Query
```sql
SELECT * FROM DEPARTMENT;
SELECT * FROM EMPLOYEE;
```

### Output

### DEPARTMENT Table

<table>
<tr><th>DEPTNO</th><th>DNAME</th></tr>
<tr><td>10</td><td>RESEARCH</td></tr>
<tr><td>20</td><td>ACCOUNTING</td></tr>
<tr><td>30</td><td>SALES</td></tr>
<tr><td>40</td><td>OPERATIONS</td></tr>
</table>

### EMPLOYEE Table

<table>
<tr>
<th>EMPNO</th><th>ENAME</th><th>JOB</th><th>MGR</th>
<th>HIREDATE</th><th>SAL</th><th>COMM</th><th>DEPTNO</th>
</tr>
<tr><td>7369</td><td>SMITH</td><td>CLERK</td><td>7902</td><td>1980-12-17</td><td>800</td><td>NULL</td><td>20</td></tr>
<tr><td>7499</td><td>ALLEN</td><td>SALESMAN</td><td>7698</td><td>1981-02-20</td><td>1600</td><td>300</td><td>30</td></tr>
<tr><td>7521</td><td>WARD</td><td>SALESMAN</td><td>7698</td><td>1981-02-22</td><td>1250</td><td>300</td><td>30</td></tr>
<tr><td>7566</td><td>JONES</td><td>MANAGER</td><td>7839</td><td>1981-04-02</td><td>2975</td><td>NULL</td><td>20</td></tr>
<tr><td>7654</td><td>MARTIN</td><td>SALESMAN</td><td>7698</td><td>1981-09-28</td><td>1250</td><td>1400</td><td>30</td></tr>
<tr><td>7698</td><td>BLAKE</td><td>MANAGER</td><td>7839</td><td>1981-05-01</td><td>2850</td><td>NULL</td><td>30</td></tr>
<tr><td>7782</td><td>CLARK</td><td>MANAGER</td><td>7839</td><td>1981-06-09</td><td>2450</td><td>NULL</td><td>10</td></tr>
<tr><td>7788</td><td>SCOTT</td><td>ANALYST</td><td>7566</td><td>1982-12-09</td><td>3000</td><td>NULL</td><td>20</td></tr>
<tr><td>7839</td><td>KING</td><td>PRESIDENT</td><td>NULL</td><td>1981-11-17</td><td>5000</td><td>NULL</td><td>10</td></tr>
<tr><td>7844</td><td>TURNER</td><td>SALESMAN</td><td>7698</td><td>1981-09-08</td><td>1500</td><td>0</td><td>30</td></tr>
<tr><td>7876</td><td>ADAMS</td><td>CLERK</td><td>7788</td><td>1983-01-12</td><td>1100</td><td>NULL</td><td>20</td></tr>
<tr><td>7900</td><td>JAMES</td><td>CLERK</td><td>7698</td><td>1981-12-03</td><td>950</td><td>NULL</td><td>30</td></tr>
<tr><td>7902</td><td>FORD</td><td>ANALYST</td><td>7566</td><td>1981-12-03</td><td>3000</td><td>NULL</td><td>20</td></tr>
<tr><td>7934</td><td>MILLER</td><td>CLERK</td><td>7782</td><td>1982-01-23</td><td>1300</td><td>NULL</td><td>10</td></tr>
</table>

---

## Conclusion
Successfully created the database, defined tables with constraints, inserted records, and retrieved data using basic SQL commands in MariaDB/MySQL.
