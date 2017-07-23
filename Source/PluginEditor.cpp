/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
StuttererAudioProcessorEditor::StuttererAudioProcessorEditor (StuttererAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (600, 400);
    
    addAndMakeVisible(MainControls);
}

StuttererAudioProcessorEditor::~StuttererAudioProcessorEditor()
{
}

//==============================================================================
void StuttererAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("STOOOTERE! 999", getLocalBounds(), Justification::centred, 1);
}

void StuttererAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
    auto r = getLocalBounds();
    MainControls.setBounds(r);
}

void StuttererAudioProcessorEditor::InvertSelected (ToggleButton* invertedButton)
{
    processor.Inverted = invertedButton->getToggleState();
}
