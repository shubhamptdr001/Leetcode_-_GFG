# Write your MySQL query statement below
select teacher_id,
count(distinct subject_id)as cnt 
from teacher
group by teacher_id;




-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna