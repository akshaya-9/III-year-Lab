s = Hash.new 0
s['English'] = 80
s['telugu'] = 75
s['hindi'] = 91
total_marks = 0

s.each {|key,value|
 total_marks +=value
 } 

puts "Total Marks: "+total_marks.to_s