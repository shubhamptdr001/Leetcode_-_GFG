# Write your MySQL query statement below
select round(sum(player_log)/count(distinct player_id),2) as fraction
from
(select player_id,
datediff(event_date,min(event_date) over(partition by player_id))=1 as player_log
from activity) as new_table

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna