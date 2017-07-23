/*
  ==============================================================================

    MainControls.cpp
    Created: 22 Jul 2017 10:17:41pm
    Author:  Brian Williams

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "MainControls.h"

//==============================================================================
MainControls::MainControls()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    
    addAndMakeVisible(configControls);
    
    setSize(600,400);

}

MainControls::~MainControls()
{
}

void MainControls::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("MainControls", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void MainControls::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..
    auto r = getLocalBounds();
    
    configControls.setBounds(r.removeFromTop(70));

}
