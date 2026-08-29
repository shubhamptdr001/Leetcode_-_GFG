# Write your MySQL query statement below
-- left(trans_date,7) as month
select date_format(trans_date,'%Y-%m') as month ,country,count(id)as trans_count,sum(if(state = 'approved',1,0)) as approved_count,sum(amount)as trans_total_amount,sum(if(state='approved',amount,0))as approved_total_amount
from transactions
group by month,country;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna