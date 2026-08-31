# Write your MySQL query statement below
select customer_id
from customer
group by customer_id
having count(distinct product_key) = (select count(product_key) from product);

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna