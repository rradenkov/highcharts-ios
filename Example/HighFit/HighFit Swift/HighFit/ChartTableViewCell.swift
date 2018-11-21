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
    @IBOutlet weak var chartView: HIChartView!
    @IBOutlet weak var button: UIButton!

    override func awakeFromNib() {
        super.awakeFromNib()
        // Initialization code

        selectionStyle = UITableViewCellSelectionStyle.none

        chartView.backgroundColor = UIColor.clear
    }
}
