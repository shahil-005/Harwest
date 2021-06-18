import java.lang.Integer.min

private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles
//Fast IO: https://github.com/finalchild/kotlin-fast-io/blob/master/src/solution.kt#L97

fun main(){
    var t = readInt()
    while(t-- > 0){
        var (x,y)=readInts()

        var temp=x+y
        temp=temp+1-min(x,y)

        var c=temp-x
        var a=temp-y
        var b=min(x,y)-1
        println("$a $b $c")
    }
}