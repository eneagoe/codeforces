#!/usr/bin/env ruby -w

require 'set'

n = gets.strip.to_i
seen = Set.new

while !seen.include?(n)
  seen.add(n)
  begin
    n += 1
    seen.add(n) if !seen.include?(n) && n % 10 != 0
  end while n % 10 != 0
  while n % 10 == 0
    n /= 10
  end
end

puts seen.size
