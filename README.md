# mruby-yao   [![Build Status](https://travis-ci.org/hfm/mruby-yao.svg?branch=master)](https://travis-ci.org/hfm/mruby-yao)

[Yao](https://github.com/yaocloud) class

## install by mrbgems
- add conf.gem line to `build_config.rb`

```ruby
MRuby::Build.new do |conf|

    # ... (snip) ...

    conf.gem :github => 'hfm/mruby-yao'
end
```
## example
```ruby
p Yao.hi
#=> "hi!!"
t = Yao.new "hello"
p t.hello
#=> "hello"
p t.bye
#=> "hello bye"
```

## License
under the MIT License:
- see LICENSE file
