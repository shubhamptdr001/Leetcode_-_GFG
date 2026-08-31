# Write your MySQL query statement below
select user_id,count(follower_id) as followers_count
from followers
group by user_id        # to group by particular id
order by user_id asc;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna