# Write your MySQL query statement below
select s.user_id,round(avg(if(c.action='confirmed', 1,0)),2) as confirmation_rate
from Signups s
left join Confirmations c
on s.user_id = c.user_id
group by s.user_id

--  avg(if(c.action='confirmed', 1,0)) means --> either it takes 1 for confirmed

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna