select id, count(id) as num from
(select requester_id as id from RequestAccepted
union all
select accepter_id as id from RequestAccepted
)t
group by id
order by num desc limit 1;

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna