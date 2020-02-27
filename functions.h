#pragma once
using namespace System;

//https://stackoverflow.com/questions/10725438/converting-txt-to-rtf

public class Transmute { //Antonio's improved method (note that he defined a code page \ansicpg1250):
public:
	String^ PlainTextToRtf(String^ plainText)
	{
		//if (plaintext.IsNullOrEmpty(plainText))
		//	return "";

		//String^ escapedPlainText = plainText.Replace(@"\", @"\\").Replace("{", @"\{").Replace("}", @"\}");
		//	escapedPlainText = EncodeCharacters(escapedPlainText);

		//String^ rtf = @"{\rtf1\ansi\ansicpg1250\deff0{\fonttbl\f0\fswiss Helvetica;}\f0\pard ";
		//rtf += escapedPlainText.Replace(Environment::NewLine, "\\par\r\n ") + ;
		//rtf += " }";
		//return rtf;

		return "";
	}
};