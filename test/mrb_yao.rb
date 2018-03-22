##
## Yao Test
##

assert("Yao#hello") do
  t = Yao.new "hello"
  assert_equal("hello", t.hello)
end

assert("Yao#bye") do
  t = Yao.new "hello"
  assert_equal("hello bye", t.bye)
end

assert("Yao.hi") do
  assert_equal("hi!!", Yao.hi)
end
