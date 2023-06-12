import numpy as np
import ROOT

# Generate random data for demonstration
num_points = 100
eta_values = np.random.uniform(low=-4, high=4, size=num_points)
phi_values = np.random.uniform(low=-3.5, high=3.5, size=num_points)
num_events = np.random.randint(low=0, high=100, size=num_points)

# Create the data array
data = np.column_stack((eta_values, phi_values, num_events))


# Create a ROOT canvas
canvas = ROOT.TCanvas("canvas", "Event Plot", 800, 600)

# Create the graph
graph = ROOT.TGraph()

# Set the ranges for eta and phi
eta_min, eta_max = -4, 4
phi_min, phi_max = -3.5, 3.5

# Loop over the data and fill the graph
for i in data:

    # Calculate the marker size proportional to the number of events
    marker_size = 0.01 * i[2]
    print(marker_size)

    # Add a point to the graph at the intersection of eta and phi with the marker size
    point_index = graph.GetN()
    graph.SetPoint(point_index, i[0], i[1])
    graph.SetMarkerSize(marker_size)
    graph.SetMarkerStyle(ROOT.kFullCircle)

# Set the axis titles
graph.GetXaxis().SetTitle("Eta")
graph.GetYaxis().SetTitle("Phi")

# Set the range for the graph
graph.GetXaxis().SetRangeUser(eta_min, eta_max)
graph.GetYaxis().SetRangeUser(phi_min, phi_max)

# Draw the graph
graph.Draw("AP")  # "AP" option specifies drawing with markers and connecting lines if more than one point

# Show the canvas
canvas.Update()

canvas.SaveAs("TGraph.png")
canvas.SaveSource("TGraph.C")