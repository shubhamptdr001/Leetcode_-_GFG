select round(sum(i.tiv_2016),2) as tiv_2016
from Insurance i
where tiv_2015 in (
    select tiv_2015
    from insurance
    group by tiv_2015
    having count(*) > 1
)
and (lat,lon) in (
    select lat,lon
    from insurance
    group by lat, lon
    having count(*)=1
)


-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna