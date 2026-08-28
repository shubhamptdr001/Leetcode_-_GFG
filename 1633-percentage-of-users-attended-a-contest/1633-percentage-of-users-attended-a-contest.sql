# Write your MySQL query statement below
select contest_id, round(count(distinct user_id)*100 / (select count(user_id) from users),2) as percentage
from register
group by contest_id
order by percentage Desc , contest_id ASC;


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna