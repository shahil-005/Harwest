import java.lang.Integer.max
import java.lang.Integer.min
import java.util.*
import kotlin.collections.ArrayList
import kotlin.collections.HashMap
import kotlin.math.abs

private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles
private fun readArr() = readLine()!!.split(' ').map(String::toInt)
private fun readArr2() = readLine()!!.split(' ').map(String::toLong)
//Fast IO: https://github.com/finalchild/kotlin-fast-io/blob/master/src/solution.kt#L97

fun main(){
    var t=readInt()
    while(t-- > 0) {
        var s=readLn()
        var x=0
        var y=0
        var n=s.length
        for(i in 0..(n-1)){
        	if(s[i]=='>'){
        		x=1
        	}
        	if(s[i]=='<'){
        		y=1
        	}
        }
        if(x==1 && y==1){
        	println("?")
        }
        else if(x==1){
        	println(">")
        }
        else if(y==1){
        	println("<")
        }
        else{
        	println("=")
        }
    }
}