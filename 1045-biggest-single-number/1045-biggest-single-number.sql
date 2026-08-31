# Write your MySQL query statement below
select max(num) as num
from
(select num
from MyNumbers
group by num
having count(num) = 1) as new_table;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna