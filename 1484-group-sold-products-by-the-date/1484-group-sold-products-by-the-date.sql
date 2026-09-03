select sell_date,count(distinct product) as num_sold,
GROUP_CONCAT(distinct product order by product separator ',')as products
from activities
group by sell_date
order by sell_date;


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna