# Write your MySQL query statement below
select ta.Num from (select l1.Num from Logs l1,Logs l2,Logs l3 where ( l1.num = l2.num and l3.num = l2.num ) and l1.Id +1 = l2.Id and l2.Id+1 = l3.Id group by Num) ta
