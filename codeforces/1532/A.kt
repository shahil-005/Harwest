import java.lang.Integer.max
import java.lang.Integer.min
import java.util.*
import kotlin.collections.ArrayList
import kotlin.collections.HashMap

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
    var t=readInt()
    while(t-- > 0){
        var (a,b)=readArr()
        println(a+b)
    }
}