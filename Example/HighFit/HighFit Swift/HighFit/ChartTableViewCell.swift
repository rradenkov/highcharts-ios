//
//  ChartTableViewCell.swift
//  HighFit
//
//  Created by Radoslav Radenkov on 19.11.18.
//  Copyright © 2018 Spinney. All rights reserved.
//

import UIKit
import Highcharts

class ChartTableViewCell: UITableViewCell {
    var chartView: HIChartView? {
        get {
            return chartViewContainer.subviews.first as? HIChartView
        }

        set {
            for view in chartViewContainer.subviews {
                view.removeFromSuperview()
            }

            guard let chartView = newValue else {
                return
            }

            chartViewContainer.addSubview(chartView)
            chartView.frame = chartViewContainer.bounds
            chartView.autoresizingMask = [UIView.AutoresizingMask.flexibleWidth, UIView.AutoresizingMask.flexibleHeight]
            chartView.translatesAutoresizingMaskIntoConstraints = true
            /*
            chartView.translatesAutoresizingMaskIntoConstraints = false
            let constraints = [
                chartView.leadingAnchor.constraint(equalTo: chartViewContainer.leadingAnchor),
                chartView.trailingAnchor.constraint(equalTo: chartViewContainer.trailingAnchor),
                chartView.topAnchor.constraint(equalTo: chartViewContainer.topAnchor),
                chartView.bottomAnchor.constraint(equalTo: chartViewContainer.bottomAnchor),
            ]

            NSLayoutConstraint.activate(constraints)
 */
        }
    }
    
    @IBOutlet weak var button: UIButton!
    @IBOutlet weak var chartViewContainer: UIView!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code

        selectionStyle = UITableViewCellSelectionStyle.none

        chartViewContainer.backgroundColor = UIColor.clear
    }
}
