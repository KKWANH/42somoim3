fun main() {
    var k = readLine()!!.toInt()
    for(i in 1..k) {
        for(j in k-i downTo 1) print(" ")
        for(j in 2*i-1 downTo 1) print("*")
        println()
    }
}
