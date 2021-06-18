import java.lang.Integer.max
import java.lang.Integer.min
import java.util.*
private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles
private fun readArr() = readLine()!!.split(' ').map(String::toInt)
//Fast IO: https://github.com/finalchild/kotlin-fast-io/blob/master/src/solution.kt#L97

fun main(){
    var t = 1
    while(t-- > 0){
        var n=readInt()
        var a=readArr()
        var m1=0
        var m2=0
        var ans=0
        for(it in a){
            if(m2>it){
                ans++
            }
            if(it>=m1){
                m2=m1
                m1=it
            }
            else if(it>=m2){
                m2=it
            }
        }
        print(ans)
    }
}