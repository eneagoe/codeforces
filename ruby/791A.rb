#!/usr/bin/env ruby -w

a, b = gets.split(/\s+/).map(&:to_i)

y = 0
while a <= b
  a *= 3
  b *= 2
  y += 1
end

puts y
