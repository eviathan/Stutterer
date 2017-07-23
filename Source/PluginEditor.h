/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "MainControls.h"

//==============================================================================
/**
*/
class StuttererAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    StuttererAudioProcessorEditor (StuttererAudioProcessor&);
    ~StuttererAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    void InvertSelected(ToggleButton* invertedButton);

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    StuttererAudioProcessor& processor;
    MainControls MainControls;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (StuttererAudioProcessorEditor)
};
