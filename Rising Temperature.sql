# Write your MySQL query statement below
select t2.Id from Weather t1,Weather t2 where datediff(t2.Date,t1.Date)=1 and t2.Temperature > t1.Temperature
