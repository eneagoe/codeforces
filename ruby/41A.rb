#!/usr/bin/env ruby -w

s = gets.strip.chomp
t = gets.strip.chomp

if s == t.reverse
  puts "YES"
else
  puts "NO"
end
