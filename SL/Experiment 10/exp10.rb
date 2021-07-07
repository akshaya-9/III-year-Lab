student = {
    "telugu" => 70,
    "english" => 80,
    "hindi"=>90
}
#puts student["telugu"]
#puts student["english"]
#puts student["hindi"]
sum=0
student.each { |key,value| 
  sum+=value
}
puts "total sum:"+sum.to_s