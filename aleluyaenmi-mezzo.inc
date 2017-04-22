\context Staff = "mezzo" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Staff.midiInstrument = "Voice Oohs"
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzo" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\time 6/8
		\clef "treble"
		\set Staff.printKeyCancellation = ##t
		\key e \major

		R2.*2  |
		gis'' 8 e'' e'' e'' 4. ~  |
		e'' 4. r  |
%% 5
		a'' 8 c'' c'' c'' 4. ~  |
		c'' 4. r8 c'' c''  |
		e'' 2. (  |
		fis'' 2. )  |
		e'' 2.  |
%% 10
		R2.  |
		gis'' 8 e'' e'' e'' 4. ~  |
		e'' 4. r  |
		a'' 8 c'' c'' c'' 4. ~  |
		c'' 4. r8 c'' c''  |
%% 15
		e'' 2. (  |
		fis'' 2. )  |
		gis'' 2.  |
		R2.  |
		\bar "|."
	}

	\lyricsto "voz-mezzo" \new Lyrics \lyricmode {
		A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu __ ya.

		A -- le -- lu -- ya,
		a -- le -- lu -- ya,
		a -- le -- lu __ ya.
	}
>>
