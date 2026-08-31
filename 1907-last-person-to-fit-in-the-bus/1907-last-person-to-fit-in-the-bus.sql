# Write your MySQL query statement below
select q1.person_name
from queue q1
inner join queue q2
on q1.turn >= q2.turn
group by q1.turn
having sum(q2.weight) <= 1000
order by q1.turn desc limit 1;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna