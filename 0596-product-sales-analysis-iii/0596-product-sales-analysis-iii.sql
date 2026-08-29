# Write your MySQL query statement below
select product_id, year as first_year, quantity, price 
from sales
where (product_id, year) IN (
    select product_id,min(year)
    from sales
    group by product_id
)

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna