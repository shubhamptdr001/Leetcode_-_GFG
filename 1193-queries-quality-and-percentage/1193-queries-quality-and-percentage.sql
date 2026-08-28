# Write your MySQL query statement below
select query_name,
round(sum(rating / position)/count(query_name),2) as quality,
round(sum(if(rating < 3,1,0))/count(query_name) * 100,2) as poor_query_percentage
from queries
group by query_name;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna