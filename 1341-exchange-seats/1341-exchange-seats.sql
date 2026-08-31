# Write your MySQL query statement below
select 
case 
when id = (select max(id) from seat) and id%2=1 then id
when id%2=1 then id+1 else id-1 end as id,
student
from seat 
order by id


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna