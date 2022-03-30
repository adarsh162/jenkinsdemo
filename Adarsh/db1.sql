SELECT * FROM client_master 
                   where City like '_a%';
                   
SELECT * from client_master ;
Drop table product_master;
CREATE table client_master(client_no varchar2(6) PRIMARY KEY,Name varchar2(20),address1 varchar2(30),address2 varchar2(30),City varchar2(15),State varchar2(15),Pincode number(6),bal_due Numeric (10, 2));
INSERT into client_master VALUES('0001','Ivan','A/2','Worli','Bombay','Maharashtra',400054,15000);
INSERT into client_master VALUES('0002','Vandana','B/2','Juhu','Madras','Tamilnadu',780001,0);
INSERT into client_master VALUES('0003','Pramada','C/4','Nariman','Bombay','Maharashtra',400057,5000);
INSERT into client_master VALUES('0004','Basu','A/5','Bandra','Bombay','Maharashtra',400056,0);
INSERT into client_master VALUES('0005','Ravi','E/10','Delhi','Delhi','Delhi',100001,2000);
INSERT into client_master VALUES('0006','Rukmini','B/6','Juhu','Bombay','Maharashtra',400050,0);
SELECT * FROM client_master 
                   where Name like '_a%';
SELECT * FROM product_master ;
SELECT * FROM product_master order by description asc;
CREATE table Product_master(Product_no varchar2(6) PRIMARY KEY,Description varchar2(15),Profit_percent Numeric (4, 2),Unit_measure varchar2(10),Qty_on_hand number(8),Reoder_lvl number(8),Sell_price Numeric (8, 2),Cost_price Numeric (8, 2));
INSERT into Product_master VALUES('P00001','1.44floppies',5,'piece',100,20,525,500);
INSERT into Product_master VALUES('P03453','Monitors',6,'piece',10,3,12000,11200);
INSERT into Product_master VALUES('P06734','Mouse',5,'piece',20,5,1050,500);
INSERT into Product_master VALUES('P07865','1.22 floppies',5,'piece',100,20,525,500);
INSERT into Product_master VALUES('P07868','Keyboards',2,'piece',10,3,3150,3050);
INSERT into Product_master VALUES('P07885','CD Drive',2.5,'piece',10,3,5250,5100);
INSERT into Product_master VALUES('P07965','540 HDD',4,'piece',10,3,8400,8000);
INSERT into Product_master VALUES('P07975','1.44 Drive',5,'piece',10,3,1050,1000);
INSERT into Product_master VALUES('P08865','1.22 Drive',5,'piece',2,3,1050,1000);
SELECT count(distinct Description) from Product_master;
SELECT avg( Sell_price) from Product_master;
SELECT min(Sell_price)  min_price from Product_master;
,max(distinct Sell_price)  max_price from Product_master;
SELECT max(distinct Sell_price) as max_price from Product_master;
SELECT max(distinct Sell_price) max_price , 
                               min(distinct Sell_price)  min_price
                                                             from Product_master;
SELECT count(*) from Product_master where Sell_price>=1500;
SELECT max(Sell_price) max_price , 
                               min(Sell_price)  min_price
                                                             from Product_master;
CREATE table Sales_master(Salesman_no varchar2(6) CONSTRAINT pk PRIMARY KEY CHECK(Salesman_no LIKE '_S'));


                   