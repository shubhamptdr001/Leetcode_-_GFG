select  p.product_name as product_name, sum(o.unit) as unit
from products p
join orders o
on p.product_id = o.product_id
where left(o.order_date,7) = '2020-02'
group by p.product_id
having sum(o.unit) >= 100;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna