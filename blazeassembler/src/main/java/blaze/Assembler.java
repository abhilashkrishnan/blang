package blaze;

import org.antlr.v4.runtime.ANTLRFileStream;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.CharStreams;
import org.antlr.v4.runtime.CommonTokenStream;

import java.io.IOException;

public class Assembler {
    public static void main(String[] args) throws IOException {
        if (args.length != 1) {
            System.err.println("Please give the file to parse as the only argument!");
            System.exit(-1);
        }

        runProgram(args[0]);
    }

    private static void runProgram(String fileName) throws IOException {
        System.out.println("****************************");
        System.out.println("* Blaze Language Assembler *");
        System.out.println("****************************");

        System.out.println("Compiling Bytecode");
        System.out.println(" ");
        CharStream codePointCharStream = CharStreams.fromFileName(fileName);

        System.out.println(codePointCharStream.toString());

        int[] generatedProgram = BlazeLangVisitor.generateProgram(codePointCharStream);

        System.out.println("Generated Machine Language");
        System.out.println(" ");

        for (int i = 0; i < generatedProgram.length; i++) {
            System.out.println(generatedProgram[i]);
        }
    }
}
